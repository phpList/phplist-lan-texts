<?php

# language dependent text used in the interface for users (not admin)

$strCharSet             = 'UTF-8';
$strLancode             = 'sr'; ## two letter iso code
$strLandir              = 'ltr'; ## language direction (ltr or rtl)
$strName                = 'Ime';
$strAddress             = 'Adresa';
$strEmail               = 'Email adresa';
$strTown                = 'Grad';
$strPostcode            = 'Poštanska adresa';
$strSubscribeInfo       = '<h3>Pretplatite se na naš Bilten</h3>';
$strRequired            = 'potrebna polja su označena crvenom bojom';
$strSubscribeTitle      = 'Pretplatite se na naš Bilten';
$strPleaseSelect        = 'odaberite bilten na koji želite da se pretplatite';
$strSubmit              = 'Pretplatite se na odabrani bilten';
$strNotAvailable        = 'Izvinite, trenutno nema dostupnih biltena';
$strEnterName           = 'Unesite vaše ime';
$strEnterEmail          = 'Unesite važeću email adresu';
$strConfirmEmail        = 'Potvrdite vašu email adresu';
$strInvalidHostInEmail  = 'Izvinite, taj email domen je nedostupan, molimo proverite da li ste pravilno uneli email adresu';
$strEnterList           = 'Odaberite bilten na koji želite da se pretplatite';
$strPleaseEnter         = 'Unesite';
# the thanks message can contain placeholders
#$strThanks              = 'Dear [FIRST NAME], <br/>Thank you for subscribing to our lists.';
$strThanks              = 'Hvala Vam na prijavi na naš bilten.';
# the EmailConfirmation message can contain placeholders
#$strEmailConfirmation   = 'Your email [email] has been added to our system. You will be e-mailed shortly with confirmation of the lists you have subscribed to.';
$strEmailConfirmation   = 'Vaša email adresa [email] je dodata u sistem. Primićete poruku sa zahtevom da potvrdite vašu pretplatu. Molimo vas da kliknete na link u toj poruci kako bi potvrdili vašu pretplatu.';
$strEmailFailed          = 'Izvinite, slanje poruke za potvrdu nije uspelo, molimo kliknite "Učitaj ponovo" da pokušate ponovo. Ako i dalje ne radi, kontaktirajte administratora.';
$strUnsubscribeTitle    = 'Odjavite se sa našeg biltena';
$strUnsubscribeDone     = 'Odjavljeni ste sa našeg biltena i uskoro ćete primiti poruku potvrde.';
$strUnsubscribedNoConfirm = 'Odjavljeni ste sa ovog bilten sistema';
$strBack                = 'Nazad';
$strUnsubscribeInfo     = 'Odjavite se sa našeg biltena';
$strContinue            = 'Nastavi';
$strUnsubscribeSelect   = 'Molimo odaberite bilten sa kojeg želite da se odjavite';
$strAllLists            = 'Sve liste';
$strNoLists             = 'Nijedna';
$strUnsubscribeRequestForReason = 'Žao nam je što više niste zainteresovani za naš bilten. Kako bi nam pomogli da unapredimo naše usluge, bili bismo Vam zahvalni ako bi nam rekli zašto:';
$strUnsubscribeFinalInfo = '<br/><b>Molimo obratite pažnju</b>: ova strana služi za odjavu sa našeg bilten sistema <b>zauvek</b>. Ako želite da promenite vašu email adresu, ili ako želite da promenite koje biltene primate, molimo da <a href="[PREFERENCESURL]">ažurirate vaša podešavanja</a> umesto toga';
$strNoListsFound        = 'Izvinite, niste pretplaćeni ni na jedan od naših biltena sa ovom email adresom.';
$strResubmit            = 'Podnesi ponovo';
$strUnsubscribeSubmit   = 'Odjavite se sa označenih biltena';
$strValuesMissing       = 'Nedostaju sledeće potrebne vrednosti';
$strConfirmInfo         = 'Hvala Vam na potvrdi pretplate na naše biltene. Bilteni na koje ste pretplaćeni su izlistani ispod';
$strAlreadyConfirmed    = 'Već smo primili vašu potvrdu ranije.';
$strConfirmTitle        = 'phpList strana za potvrdu';
$strUserNotFound        = 'Pretplatnik nije pronađen';
$strUserAlreadyInitialised = 'Izvinite, vaša lozinka je već podešena';
$strConfirmFailInfo     = 'Izvinite, vaš zahtev za potvrdu nije prepoznat. Molimo proverite da li koristite punu veb adresu kao što je pomenutu u email-u koji ste primili. Ponekad ova veb adresa može biti u više redova.';
$strPreferHTMLEmail     = 'I prefer to receive emails in HTML format';
$strPreferTextEmail     = 'I prefer to receive emails in Text format';
$strPreferredFormat      = 'Preferred format for email messages:';
$strText                 = 'Text';
$strHTML                = 'HTML';
$strPreferencesTitle    = 'Update your preferences';
$strPreferencesInfo     = 'Please confirm that the information below is correct and click the "Update" button';
$strUpdatePreferences   = 'Update';
$strPreferencesEmailChanged = 'Your email address has changed. Please visit the link in the message you will receive to confirm your new email address';
$strYouAreBlacklisted = 'Your email is listed in our "Do not send" list, which means that you have requested us never to send you any more newsletters. <br/>
In order to receive newsletters again, manual intervention is required by our administrator. Please contact us stating explicitly that you want to receive newsletters again.';
$strPreferencesNotificationSent = 'You will receive a notification message with the changes';
$strPreferencesUpdated = 'Thank you. We have updated your information.';
$strClickHere          = 'Click here';
$strThisLink           = 'this link';
$strToUnsubscribe      = 'If you do not want to receive any more newsletters, ';
$strToUpdate           = 'To update your preferences and to unsubscribe visit';
$strSendHTML           = 'Send HTML email';
$strYes                = 'Yes';
$strNo                 = 'No';
$strUnsubscribe        = 'Unsubscribe';
$strAllMailinglists    = 'All newsletters';
$strAttachmentIntro     = 'This message contains attachments that can be viewed with a webbrowser:';
$strLocation           = 'Location';
$strFrequency           = 'How often do we send you messages';
$strHourly             = 'Hourly';
$strDaily               = 'Daily';
$strWeekly             = 'Weekly';
$strMonthly             = 'Monthly';
$strChoosePassword      = 'Please choose a password';
$strConfirmPassword    = 'Confirm your password';
$strEnterPassword       = 'Please enter your password';
$strForgotPassword     = 'Forgot Password';
$strForgotPasswordEmailBody = '
    Dear Mailinglist Master
    I forgot my password for the phpList mailinglist system.
    Could you reset it to something and let me know what it is?
    Thanks
';    

$strPassword           = 'Password';
$strPassword2           = 'Confirm Password';
$strPasswordsNoMatch    = 'Passwords are not the same';
$strEmailsNoMatch     = 'Email addresses you entered do not match';
$strEmailNotValid  = 'Email address is not valid';
$strInvalidPassword     = 'Error: invalid email or password';
$strPasswordSent        = 'Your password has been sent. You should receive it in the next few minutes';
$strPasswordRemindSubject = 'Your password for our newsletters';
$strPasswordRemindMessage = 'Your password is ';
$strPasswordRemindInfo = 'To receive your password by email, please enter your email and click the "'.$strForgotPassword.'" button.';
$strLogin               = 'Login';
$strLoginTitle          = 'Please enter your email address and password';
$strLoginInfo           = 'This page requires a password. Please enter your email address and password';
$strPersonalLocationInfo = '
  <p>This page requires a personal identification that can be found on each message that you receive.</p>
  <p>If you have clicked this location, and you get this error, please make sure to paste the entire line into the
  location box of your browser. Sometimes the location is wrapped over several lines.</p>
  <p>If you do not know the location, enter your email address in the box and click "Continue"</p>
';
$strPersonalLocationSent = '<h3>Success! You should receive a message with your personal location shortly</h3>';
$strUserExists   = 'A subscriber with that address already exists, and our records contain a different password';
$strUserExistsExplanationStart = 'In order to obtain your password, click ';
$strUserExistsExplanationLink = 'here';
$strUserExistsExplanationEnd = ' to go to the page where you can request your personal location';
$strExplainBlacklist = 'The email address that you enter here will be recorded in our database with the sole purpose of blocking any email sent from this system.';

$strUserExistsResubscribe = 'A subscriber with that address already exists';
$strUserExistsResubscribeExplanation = 'Visit the <a href="%s">preferences page</a> to update your information.';


$strForwardTitle = 'Forward a Message to Someone';
$strForwardSubtitle = 'Forwarding the message with subject ';
$strForwardEnterEmail = 'Please enter a valid email address to forward to';
$strForwardInvalidEmail = '%s is not a valid email address';
$strForwardBlacklistedEmail = 'Recipient has requested not to receive emails from this system.';
$strForwardEnterEmails = 'Please enter a maximum of %s valid email addresses to forward to in this box, one per line';
$strForwardPersonalNote = 'You can enter a plain text message (of maximum %d characters) that will be prepended to the forwarded mail';
$strForwardSuccessInfo ='The message has been forwarded';
$strForwardFailInfo = 'Forwarding the message failed';
$strForwardAlreadyDone = 'This message has already been successfully forwarded to that email address';
$strForwardCountReached = 'Maximum amount of forwards reached';
$strForwardNoteLimitReached = 'Maximum length of personal note reached';
$strForwardFooter = 'This message has been forwarded to you by [FORWARDEDBY].
  You have not been automatically subscribed to this newsletter.
  To subscribe to this newsletter go to';
$strForward = 'Forward';
$strFwd = 'Fwd'; # short version of forward for email subject


?>
