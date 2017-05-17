<html>

v ng-controller="SIController">
<select id="current-command" ng-model="currentCommand">
  <option ng-repeat="city in availableCommands" value="{{city}}">{{city}}</option>
</select>
<!-- <button ng-click="changeSelectedOption()">Select something</button> -->
    {{currentCommand}}
</div>

</html>

<script>

var myApp = angular.module('myApp', []);

function SIController($scope) {

	$scope.availableCommands = ['pan india','mumbai','delhi','chennai'];
	
	$scope.currentCommand = $scope.availableCommands[0];
    
	$scope.changeSelectedOption = function() {
        $scope.currentCommand = $scope.availableCommands[1];
	};
	
};

</script>
