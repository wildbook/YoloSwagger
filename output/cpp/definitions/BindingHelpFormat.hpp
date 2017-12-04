#ifndef SWAGGER_TYPES_BindingHelpFormat_HPP
#define SWAGGER_TYPES_BindingHelpFormat_HPP
#include <json.hpp>
namespace leagueapi {
  // Help format for binding functions and types.
  enum class BindingHelpFormat {
    // Native help format
    Full = 1,
    // Python epytext format
    Epytext = 2,
  };

  inline void to_json(nlohmann::json& j, const BindingHelpFormat& v) {
    switch(v) {
      case BindingHelpFormat::Full:
        j = "Full";
      break;
      case BindingHelpFormat::Epytext:
        j = "Epytext";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, BindingHelpFormat& v) {
    const auto& s = j.get<std::string>();
    if(s == "Full"){
      v = BindingHelpFormat::Full;
      return;
    }
    if(s == "Epytext"){
      v = BindingHelpFormat::Epytext;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_BindingHelpFormat_HPP
