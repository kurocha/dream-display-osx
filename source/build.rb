
compile_library 'DreamDisplayOSX' do
	def source_files(environment)
		FileList[root, 'Dream/**/*.{cpp,m,mm}']
	end
end

copy_headers do
	def source_files(environment)
		FileList[root, 'Dream/**/*.{h,hpp}']
	end
end
