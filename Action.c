Action()
{
	int j, n;
	
	n = atoi(lr_eval_string("{RandomBooking}"));
	
	for (j = 1; j<=n; j++)
  {

	lr_output_message("???????? ?%d",j);

		
		Action1();
  }
	return 0;
}