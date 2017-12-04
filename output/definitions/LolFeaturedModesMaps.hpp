#ifndef SWAGGER_TYPES_LolFeaturedModesMaps_HPP
#define SWAGGER_TYPES_LolFeaturedModesMaps_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolFeaturedModesMaps {
'    // 
    std::map<std::string, std::string> assets;
    // 
    std::string gameModeName;
    // 
    bool isRGM;
  };

  void to_json(nlohmann::json& j, const LolFeaturedModesMaps& v) {
    j["assets"] = v.assets;
    j["gameModeName"] = v.gameModeName;
    j["isRGM"] = v.isRGM;
  }

  void from_json(const nlohmann::json& j, LolFeaturedModesMaps& v) {
    v.assets = j.at("assets").get<std::map<std::string, std::string>>;
    v.gameModeName = j.at("gameModeName").get<std::string>;
    v.isRGM = j.at("isRGM").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesMaps_HPP
