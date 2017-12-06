#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionChroma_t {
    int32_t championId;
    std::optional<std::string> chromaPath;
    std::vector<std::string> colors;
    bool disabled;
    int32_t id;
    bool lastSelected;
    std::string name;
    LolChampionsCollectionsOwnership_t ownership;
    bool stillObtainable;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionChroma_t& v) {
    j["championId"] = v.championId;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["colors"] = v.colors;
    j["disabled"] = v.disabled;
    j["id"] = v.id;
    j["lastSelected"] = v.lastSelected;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["stillObtainable"] = v.stillObtainable;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionChroma_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    if(auto it = j.find("chromaPath"); it != j.end() !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.colors = j.at("colors").get<std::vector<std::string>>();
    v.disabled = j.at("disabled").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
  }
}
