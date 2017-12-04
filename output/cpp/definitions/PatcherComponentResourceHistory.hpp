#ifndef SWAGGER_TYPES_PatcherComponentResourceHistory_HPP
#define SWAGGER_TYPES_PatcherComponentResourceHistory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PatcherComponentResourceHistory {
    // 
    none = 0,
    // 
    keep = 1,
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResourceHistory& v) {
    switch(v) {
      case PatcherComponentResourceHistory::none:
        j = "none";
      break;
      case PatcherComponentResourceHistory::keep:
        j = "keep";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResourceHistory& v) {
    const auto& s = j.get<std::string>();
    if(s == "none"){
      v = PatcherComponentResourceHistory::none;
      return;
    }
    if(s == "keep"){
      v = PatcherComponentResourceHistory::keep;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PatcherComponentResourceHistory_HPP
