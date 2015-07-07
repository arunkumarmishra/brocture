<div ng-app="contactApp" >
            <div class="panel panel-default">
                <div ng-controller="ContactController" class="panel-body">
                    
                        
                    <form ng-submit="submit(contactform)" name="contactform" method="post" action="" class="form-horizontal" role="form" novalidate>
                 <div ng-show="success">
                        <p class="brochure-message">{{ resultMessage }}</p>   
                        <p class="brochure-download"><a href="{{ resultDownload }}">Download</a></p>
                 </div>
                 <div ng-show="error">
                        <p class="brochure-error">{{ resultMessage }}</p>   
                 </div>
                <div ng-hide="success"class="brochure-main">
                
                        <div class="form-group"  ng-class="{ 'has-error': contactform.inputName.$invalid && submitted }">
                            <label for="inputName" class="col-lg-2 control-label">Name</label>
                            <div class="col-lg-10">
                                <input ng-model="formData.inputName" type="text" class="form-control" id="inputName" name="inputName" placeholder="Your Name" required>
                            </div>
                        </div>
                        <div class="form-group" ng-class="{ 'has-error': contactform.inputEmail.$invalid && submitted }">
                            <label for="inputEmail" class="col-lg-2 control-label">Email</label>
                            <div class="col-lg-10">
                                <input ng-model="formData.inputEmail" type="email" class="form-control" id="inputEmail" name="inputEmail" placeholder="Your Email" required>
                            </div>
                        </div>
                        <div class="form-group" ng-class="{ 'has-error': contactform.inputSubject.$invalid && submitted }">
                            <label for="inputPhone" class="col-lg-2 control-label">Phone</label>
                            <div class="col-lg-10">
                                <input ng-model="formData.inputPhone" type="text" class="form-control" id="inputPhone" name="inputPhone" placeholder="Your Phone / Mobile" required>
                            </div>
                        </div>
                        <div class="form-group" ng-class="{ 'has-error': contactform.inputMessage.$invalid && submitted }">
                            <label for="inputCountry" class="col-lg-2 control-label">Country</label>
                            <div class="col-lg-10">
                            <input ng-model="formData.inputCountry" type="text" class="form-control" id="inputCountry" name="inputCountry" placeholder="Your Country" required>
                           
                              <input ng-model="formData.inputNid" type="hidden" autocomplete="off" ng-init="formData.inputNid = <?php print $node; ?>"  id="inputNid" name="inputNid"> 
                          
                            </div>
                        </div>
                        <div class="form-group">
                            <div class="col-lg-offset-2 col-lg-10">
                                <button type="submit" class="btn btn-default" ng-disabled="submitButtonDisabled">
                                    Send Message
                                </button>
                            </div>
                        </div>
                      </div>  
                    </form>
                </div>
            </div>
</div>
