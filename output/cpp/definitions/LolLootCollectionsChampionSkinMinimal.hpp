#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsChampionSkinMinimal_t {
    int32_t id;
    int32_t championId;
    std::string name;
    LolLootCollectionsOwnership_t ownership;
    std::string tilePath;
    std::string splashPath;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsChampionSkinMinimal_t& v) {
    j["id"] = v.id;
    j["championId"] = v.championId;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["tilePath"] = v.tilePath;
    j["splashPath"] = v.splashPath;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsChampionSkinMinimal_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
  }
  inline std::string to_string(const LolLootCollectionsChampionSkinMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
