#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionChroma_t {
    int32_t id;
    bool stillObtainable;
    int32_t championId;
    bool disabled;
    bool lastSelected;
    LolChampionsCollectionsOwnership_t ownership;
    std::string name;
    std::vector<std::string> colors;
    std::optional<std::string> chromaPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionChroma_t& v) {
    j["id"] = v.id;
    j["stillObtainable"] = v.stillObtainable;
    j["championId"] = v.championId;
    j["disabled"] = v.disabled;
    j["lastSelected"] = v.lastSelected;
    j["ownership"] = v.ownership;
    j["name"] = v.name;
    j["colors"] = v.colors;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionChroma_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.disabled = j.at("disabled").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.name = j.at("name").get<std::string>();
    v.colors = j.at("colors").get<std::vector<std::string>>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionChroma_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
