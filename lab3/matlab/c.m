d = designfilt('lowpassfir', ...      % Response type
       'FilterOrder',LPFilterOrder, ...            % Filter order
       'PassbandFrequency',CutoffFreq-500, ...     % Frequency constraints
       'StopbandFrequency',CutoffFreq+500, ...
       'DesignMethod','ls', ...         % Design method
       'PassbandWeight',1, ...          % Design method options
       'StopbandWeight',5, ...
       'SampleRate',Fs);