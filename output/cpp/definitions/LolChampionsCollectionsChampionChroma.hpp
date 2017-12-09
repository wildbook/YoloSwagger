#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionChroma_t {
    LolChampionsCollectionsOwnership_t ownership;
    std::string name;
    int32_t championId;
    int32_t id;
    bool lastSelected;
    std::optional<std::string> chromaPath;
    std::vector<std::string> colors;
    bool stillObtainable;
    bool disabled;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionChroma_t& v) {
    j["ownership"] = v.ownership;
    j["name"] = v.name;
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["lastSelected"] = v.lastSelected;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["colors"] = v.colors;
    j["stillObtainable"] = v.stillObtainable;
    j["disabled"] = v.disabled;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionChroma_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.name = j.at("name").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.id = j.at("id").get<int32_t>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.colors = j.at("colors").get<std::vector<std::string>>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.disabled = j.at("disabled").get<bool>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionChroma_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
