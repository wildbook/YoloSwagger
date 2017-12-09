#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsChampionSkinMinimal_t {
    LolLootCollectionsOwnership_t ownership;
    std::string tilePath;
    int32_t championId;
    std::string splashPath;
    std::string name;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsChampionSkinMinimal_t& v) {
    j["ownership"] = v.ownership;
    j["tilePath"] = v.tilePath;
    j["championId"] = v.championId;
    j["splashPath"] = v.splashPath;
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsChampionSkinMinimal_t& v) {
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolLootCollectionsChampionSkinMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
