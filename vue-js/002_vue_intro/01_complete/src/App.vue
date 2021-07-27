<template>
	<div id="app">
		<add-user :onAddUser="addUser"></add-user>
		<user-list :users="userList"></user-list>
	</div>
</template>

<script>
import UserList from "./components/UserList";
import AddUser from "./components/AddUser";
export default {
	components: {
		UserList,
		AddUser
	},

	data(){
		return {
			userList:[]
		}
	},
	methods:{
		addUser(name){
			this.userList.push(name);
		}
	}
};
</script>

<style>
#app {
	font-family: "Avenir", Helvetica, Arial, sans-serif;
	-webkit-font-smoothing: antialiased;
	-moz-osx-font-smoothing: grayscale;
	text-align: center;
	color: #2c3e50;
	margin-top: 60px;
}
</style>
