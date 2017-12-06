#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolFeaturedModesMaps_t {
    std::map<std::string, std::string> assets;
    bool isRGM;
    std::string gameModeName;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesMaps_t& v) {
    j["assets"] = v.assets;
    j["isRGM"] = v.isRGM;
    j["gameModeName"] = v.gameModeName;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesMaps_t& v) {
    v.assets = j.at("assets").get<std::map<std::string, std::string>>();
    v.isRGM = j.at("isRGM").get<bool>();
    v.gameModeName = j.at("gameModeName").get<std::string>();
  }
}
