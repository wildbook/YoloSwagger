#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsChampionSkinMinimal_t {
    int32_t_t championId;
    std::string_t name;
    std::string_t splashPath;
    LolLootCollectionsOwnership_t ownership;
    std::string_t tilePath;
    int32_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsChampionSkinMinimal_t& v) {
    j["championId"] = v.championId;
    j["name"] = v.name;
    j["splashPath"] = v.splashPath;
    j["ownership"] = v.ownership;
    j["tilePath"] = v.tilePath;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsChampionSkinMinimal_t& v) {
    v.championId = j.at("championId").get<int32_t_t>();
    v.name = j.at("name").get<std::string_t>();
    v.splashPath = j.at("splashPath").get<std::string_t>();
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership_t>();
    v.tilePath = j.at("tilePath").get<std::string_t>();
    v.id = j.at("id").get<int32_t_t>();
  }
  inline std::string to_string(const LolLootCollectionsChampionSkinMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
