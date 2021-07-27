<template>
    <div>
        <div v-if="isEmpty">
            사용자가 없습니다.
        </div>
        <ul v-else>
            <li v-for="(name,index) in users" :key="index">{{name}}</li>
        </ul>
    </div>
</template>

<script>
    export default {
        props:{
            users:{
                type:Array,
                default:[]
            }
        },
        computed:{
            isEmpty(){
                return this.users.length==0;
            }
        }
    }
</script>

<style scoped>
    ul {
        text-align:left;
    }
</style>