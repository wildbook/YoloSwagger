#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionChroma_t {
    LolChampionsCollectionsOwnership_t ownership;
    int32_t championId;
    std::optional<std::string> chromaPath;
    bool disabled;
    int32_t id;
    std::vector<std::string> colors;
    std::string name;
    bool lastSelected;
    bool stillObtainable;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionChroma_t& v) {
    j["ownership"] = v.ownership;
    j["championId"] = v.championId;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["disabled"] = v.disabled;
    j["id"] = v.id;
    j["colors"] = v.colors;
    j["name"] = v.name;
    j["lastSelected"] = v.lastSelected;
    j["stillObtainable"] = v.stillObtainable;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionChroma_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.championId = j.at("championId").get<int32_t>();
    if(auto it = j.find("chromaPath"); it != j.end() !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.colors = j.at("colors").get<std::vector<std::string>>();
    v.name = j.at("name").get<std::string>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
  }
}
