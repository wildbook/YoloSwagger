#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblemPosition.hpp"
#include "LolChampionsCollectionsChampionSkinEmblemPath.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblem_t {
    LolChampionsCollectionsChampionSkinEmblemPosition_t positions;
    std::string name;
    LolChampionsCollectionsChampionSkinEmblemPath_t emblemPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblem_t& v) {
    j["positions"] = v.positions;
    j["name"] = v.name;
    j["emblemPath"] = v.emblemPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblem_t& v) {
    v.positions = j.at("positions").get<LolChampionsCollectionsChampionSkinEmblemPosition_t>();
    v.name = j.at("name").get<std::string>();
    v.emblemPath = j.at("emblemPath").get<LolChampionsCollectionsChampionSkinEmblemPath_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinEmblem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
