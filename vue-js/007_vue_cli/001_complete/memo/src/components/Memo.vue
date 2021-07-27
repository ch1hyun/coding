<template>
  <div>
      <div class="list">

            <div v-if="state=='add'">
                <span>name:<input type="text" class="memo-name" v-model="newMemo" @keydown.enter="addMemo"></span><button class="btn-add-memo" @click="addMemo"> 추가</button>
            </div>
            <div v-if="state=='update'">
                <span>name:<input type="text" class="memo-name" v-model="newMemo" @keydown.enter="addMemo"></span>
                <button class="btn-add-memo" @click="updateMemo"> 적용</button><button class="btn-add-memo" @click="cancel">취소</button>

            </div>
            <ul v-for="(memo, index) in list" :key="index">
                <li>name = {{memo}} <button @click="deleteUser(memo)">삭제</button><button @click="selectedUser(index,memo)">수정</button></li>
            </ul>
        </div>

  </div> 
</template>

<script>
export default {
    data() {
        return {
            list: ["memo1", "memo2", "memo3"],
            newMemo: "",
            state: "add",
            updateMemoIndex: -1
        }
    },
    methods:{
        selectedUser(index, targetMemo) {
            this.updateMemoIndex = index;
            this.newMemo = targetMemo;
            this.state = "update";
        },

        updateMemo() {
            this.list[this.updateMemoIndex] = this.newMemo;
            this.updateMemoIndex = -1;
            this.newMemo = "";
            this.state = "add";
        },
        cancel() {
            this.updateMemoIndex = -1;
            this.newMemo = "";
            this.state = "add";
        },

        deleteUser(targetMemo) {

            for (var i = 0; i < this.list.length; i++) {
                if (this.list[i] == targetMemo) {
                    this.list.splice(i, 1);
                }
            }
        },
        addMemo() {
            if (this.newMemo.length == 0) {
                alert("값을 입력해주세요.");
                return;
            }
            this.list.push(this.newMemo);
        }
    }
}
</script>

<style scoped> 
    ul {
        list-style: none;
    }
</style>