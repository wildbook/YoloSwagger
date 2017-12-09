#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionChroma_t {
    LolChampionsCollectionsOwnership_t ownership;
    bool stillObtainable;
    bool disabled;
    bool lastSelected;
    std::string name;
    std::optional<std::string> chromaPath;
    int32_t id;
    std::vector<std::string> colors;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionChroma_t& v) {
    j["ownership"] = v.ownership;
    j["stillObtainable"] = v.stillObtainable;
    j["disabled"] = v.disabled;
    j["lastSelected"] = v.lastSelected;
    j["name"] = v.name;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["id"] = v.id;
    j["colors"] = v.colors;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionChroma_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.disabled = j.at("disabled").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.name = j.at("name").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.colors = j.at("colors").get<std::vector<std::string>>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionChroma_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
