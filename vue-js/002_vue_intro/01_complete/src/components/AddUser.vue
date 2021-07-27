<template>
    <div class="add-user">
        <input v-model="userName"><button @click="onAddUser(userName)">추가</button>
    </div>
</template>

<script>
    export default {
        props:{
            onAddUser:{
                type:Function,
                default:null
            }
        },
        data(){
            return {
                userName:""
            }
        }

    }
</script>

<style scoped>
    .add-user {
        height:40px;
        align-items:center;
        display:flex;
    }
    .add-user > * {
        height:100%;
    }

    .add-user > input {
        box-sizing: border-box;
        flex:1;
    }


</style>