#include "Config.h"
#include "Helper.h"

using namespace System;
using namespace System::IO;

namespace Config {

	void Config::setConfig(Config config) {
		BinaryWriter^ writer = gcnew BinaryWriter(gcnew FileStream(gcnew String(FILE_PATH.c_str()), FileMode::Create));

		writer->Write(gcnew String(config.name.c_str()));
		writer->Write(config.password);
		writer->Write(config.autosaveWhenClosing);
		writer->Write(config.autosaveAfterChanges);
		writer->Write(config.askWhenClosing);

		writer->Close();
	}

	Config Config::getConfig() {
		BinaryReader^ reader = gcnew BinaryReader(gcnew FileStream(gcnew String(FILE_PATH.c_str()), FileMode::Open));

		Config config;
		config.name = Helper::toString(reader->ReadString());
		config.password = reader->ReadInt32();
		config.autosaveWhenClosing = reader->ReadBoolean();
		config.autosaveAfterChanges = reader->ReadBoolean();
		config.askWhenClosing = reader->ReadBoolean();

		reader->Close();

		return config;
	}

}