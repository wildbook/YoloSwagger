#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsChampionSkinMinimal_t {
    LolLootCollectionsOwnership_t ownership;
    int32_t championId;
    std::string name;
    std::string splashPath;
    int32_t id;
    std::string tilePath;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsChampionSkinMinimal_t& v) {
    j["ownership"] = v.ownership;
    j["championId"] = v.championId;
    j["name"] = v.name;
    j["splashPath"] = v.splashPath;
    j["id"] = v.id;
    j["tilePath"] = v.tilePath;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsChampionSkinMinimal_t& v) {
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.tilePath = j.at("tilePath").get<std::string>();
  }
}
