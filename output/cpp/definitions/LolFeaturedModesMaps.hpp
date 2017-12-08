#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolFeaturedModesMaps_t {
    std::string gameModeName;
    bool isRGM;
    std::map<std::string, std::string> assets;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesMaps_t& v) {
    j["gameModeName"] = v.gameModeName;
    j["isRGM"] = v.isRGM;
    j["assets"] = v.assets;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesMaps_t& v) {
    v.gameModeName = j.at("gameModeName").get<std::string>();
    v.isRGM = j.at("isRGM").get<bool>();
    v.assets = j.at("assets").get<std::map<std::string, std::string>>();
  }
  inline std::string to_string(const LolFeaturedModesMaps_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
