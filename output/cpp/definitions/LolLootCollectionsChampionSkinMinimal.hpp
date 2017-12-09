#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsChampionSkinMinimal_t {
    std::string splashPath;
    LolLootCollectionsOwnership_t ownership;
    std::string tilePath;
    std::string name;
    int32_t id;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsChampionSkinMinimal_t& v) {
    j["splashPath"] = v.splashPath;
    j["ownership"] = v.ownership;
    j["tilePath"] = v.tilePath;
    j["name"] = v.name;
    j["id"] = v.id;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsChampionSkinMinimal_t& v) {
    v.splashPath = j.at("splashPath").get<std::string>();
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolLootCollectionsChampionSkinMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
