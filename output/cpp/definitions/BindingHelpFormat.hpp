#pragma once
#include <json.hpp>
namespace leagueapi {
  // Help format for binding functions and types.
  enum class BindingHelpFormat_t {
    // Python epytext format
    Epytext_E = 2,
    // Native help format
    Full_E = 1,
  };

  inline void to_json(nlohmann::json& j, const BindingHelpFormat_t& v) {
    switch(v) {
      case BindingHelpFormat_t::Epytext_E:
        j = "Epytext";
      break;
      case BindingHelpFormat_t::Full_E:
        j = "Full";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, BindingHelpFormat_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Epytext"){
      v = BindingHelpFormat_t::Epytext_E;
      return;
    }
    if(s == "Full"){
      v = BindingHelpFormat_t::Full_E;
      return;
    }
  }
}
