#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblemPath.hpp"
#include "LolChampionsCollectionsChampionSkinEmblemPosition.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblem_t {
    std::string name;
    LolChampionsCollectionsChampionSkinEmblemPath_t emblemPath;
    LolChampionsCollectionsChampionSkinEmblemPosition_t positions;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblem_t& v) {
    j["name"] = v.name;
    j["emblemPath"] = v.emblemPath;
    j["positions"] = v.positions;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblem_t& v) {
    v.name = j.at("name").get<std::string>();
    v.emblemPath = j.at("emblemPath").get<LolChampionsCollectionsChampionSkinEmblemPath_t>();
    v.positions = j.at("positions").get<LolChampionsCollectionsChampionSkinEmblemPosition_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinEmblem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
