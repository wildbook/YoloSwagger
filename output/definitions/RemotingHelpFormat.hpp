#ifndef SWAGGER_TYPES_RemotingHelpFormat_HPP
#define SWAGGER_TYPES_RemotingHelpFormat_HPP
#include <json.hpp>
namespace leagueapi {
  // Help format for remoting functions and types.
  enum class RemotingHelpFormat {
    // Short description format
    Brief = 4,
    // Console-friendly description format
    Console = 5,
    // Python epytext format
    Epytext = 2,
    // Native help format
    Full = 1,
  };

  void to_json(nlohmann::json& j, const RemotingHelpFormat& v) {
    switch(v) {
      case RemotingHelpFormat::Brief:
        j = "Brief";
      break;
      case RemotingHelpFormat::Console:
        j = "Console";
      break;
      case RemotingHelpFormat::Epytext:
        j = "Epytext";
      break;
      case RemotingHelpFormat::Full:
        j = "Full";
      break;
    }
  }

  void from_json(const nlohmann::json& j, RemotingHelpFormat& v) {
    const auto s& = j.get<std::string>();
    if(s == "Brief"){
      v = RemotingHelpFormat::Brief;
      return;
    }
    if(s == "Console"){
      v = RemotingHelpFormat::Console;
      return;
    }
    if(s == "Epytext"){
      v = RemotingHelpFormat::Epytext;
      return;
    }
    if(s == "Full"){
      v = RemotingHelpFormat::Full;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RemotingHelpFormat_HPP
