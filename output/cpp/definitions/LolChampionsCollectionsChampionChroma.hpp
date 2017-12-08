#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionChroma_t {
    int32_t championId;
    std::string name;
    bool stillObtainable;
    bool lastSelected;
    bool disabled;
    std::vector<std::string> colors;
    LolChampionsCollectionsOwnership_t ownership;
    int32_t id;
    std::optional<std::string> chromaPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionChroma_t& v) {
    j["championId"] = v.championId;
    j["name"] = v.name;
    j["stillObtainable"] = v.stillObtainable;
    j["lastSelected"] = v.lastSelected;
    j["disabled"] = v.disabled;
    j["colors"] = v.colors;
    j["ownership"] = v.ownership;
    j["id"] = v.id;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionChroma_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.disabled = j.at("disabled").get<bool>();
    v.colors = j.at("colors").get<std::vector<std::string>>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.id = j.at("id").get<int32_t>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionChroma_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
