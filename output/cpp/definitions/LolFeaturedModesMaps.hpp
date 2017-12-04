#ifndef SWAGGER_TYPES_LolFeaturedModesMaps_HPP
#define SWAGGER_TYPES_LolFeaturedModesMaps_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolFeaturedModesMaps {
    // 
    std::string gameModeName;
    // 
    bool isRGM;
    // 
    std::map<std::string, std::string> assets;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesMaps& v) {
    j["gameModeName"] = v.gameModeName;
    j["isRGM"] = v.isRGM;
    j["assets"] = v.assets;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesMaps& v) {
    v.gameModeName = j.at("gameModeName").get<std::string>;
    v.isRGM = j.at("isRGM").get<bool>;
    v.assets = j.at("assets").get<std::map<std::string, std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesMaps_HPP
