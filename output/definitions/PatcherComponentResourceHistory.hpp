#ifndef SWAGGER_TYPES_PatcherComponentResourceHistory_HPP
#define SWAGGER_TYPES_PatcherComponentResourceHistory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PatcherComponentResourceHistory {
    // 
    keep = 1,
    // 
    none = 0,
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentResourceHistory& v) {
    switch(v) {
      case PatcherComponentResourceHistory::keep:
        j = "keep";
      break;
      case PatcherComponentResourceHistory::none:
        j = "none";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentResourceHistory& v) {
    const auto& s = j.get<std::string>();
    if(s == "keep"){
      v = PatcherComponentResourceHistory::keep;
      return;
    }
    if(s == "none"){
      v = PatcherComponentResourceHistory::none;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PatcherComponentResourceHistory_HPP
