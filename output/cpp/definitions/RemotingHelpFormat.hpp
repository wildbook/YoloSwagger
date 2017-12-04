#ifndef SWAGGER_TYPES_RemotingHelpFormat_HPP
#define SWAGGER_TYPES_RemotingHelpFormat_HPP
#include <json.hpp>
namespace leagueapi {
  // Help format for remoting functions and types.
  enum class RemotingHelpFormat {
    // Native help format
    Full = 1,
    // Console-friendly description format
    Console = 5,
    // Short description format
    Brief = 4,
    // Python epytext format
    Epytext = 2,
  };

  inline void to_json(nlohmann::json& j, const RemotingHelpFormat& v) {
    switch(v) {
      case RemotingHelpFormat::Full:
        j = "Full";
      break;
      case RemotingHelpFormat::Console:
        j = "Console";
      break;
      case RemotingHelpFormat::Brief:
        j = "Brief";
      break;
      case RemotingHelpFormat::Epytext:
        j = "Epytext";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RemotingHelpFormat& v) {
    const auto& s = j.get<std::string>();
    if(s == "Full"){
      v = RemotingHelpFormat::Full;
      return;
    }
    if(s == "Console"){
      v = RemotingHelpFormat::Console;
      return;
    }
    if(s == "Brief"){
      v = RemotingHelpFormat::Brief;
      return;
    }
    if(s == "Epytext"){
      v = RemotingHelpFormat::Epytext;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RemotingHelpFormat_HPP
