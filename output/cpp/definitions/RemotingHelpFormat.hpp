#pragma once
#include <json.hpp>
namespace leagueapi {
  // Help format for remoting functions and types.
  enum class RemotingHelpFormat_t {
    // Short description format
    Brief_E = 4,
    // Python epytext format
    Epytext_E = 2,
    // Native help format
    Full_E = 1,
    // Console-friendly description format
    Console_E = 5,
  };

  inline void to_json(nlohmann::json& j, const RemotingHelpFormat_t& v) {
    switch(v) {
      case RemotingHelpFormat_t::Brief_E:
        j = "Brief";
      break;
      case RemotingHelpFormat_t::Epytext_E:
        j = "Epytext";
      break;
      case RemotingHelpFormat_t::Full_E:
        j = "Full";
      break;
      case RemotingHelpFormat_t::Console_E:
        j = "Console";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RemotingHelpFormat_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Brief"){
      v = RemotingHelpFormat_t::Brief_E;
      return;
    }
    if(s == "Epytext"){
      v = RemotingHelpFormat_t::Epytext_E;
      return;
    }
    if(s == "Full"){
      v = RemotingHelpFormat_t::Full_E;
      return;
    }
    if(s == "Console"){
      v = RemotingHelpFormat_t::Console_E;
      return;
    }
  }
  inline std::string to_string(const RemotingHelpFormat_t& v) {
    switch(v) {
      case RemotingHelpFormat_t::Brief_E:
        return "Brief";
      case RemotingHelpFormat_t::Epytext_E:
        return "Epytext";
      case RemotingHelpFormat_t::Full_E:
        return "Full";
      case RemotingHelpFormat_t::Console_E:
        return "Console";
    }
  }

}
