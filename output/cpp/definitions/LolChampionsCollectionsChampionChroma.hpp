#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionChroma_t {
    bool lastSelected;
    std::optional<std::string> chromaPath;
    std::string name;
    bool disabled;
    int32_t id;
    std::vector<std::string> colors;
    bool stillObtainable;
    LolChampionsCollectionsOwnership_t ownership;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionChroma_t& v) {
    j["lastSelected"] = v.lastSelected;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["name"] = v.name;
    j["disabled"] = v.disabled;
    j["id"] = v.id;
    j["colors"] = v.colors;
    j["stillObtainable"] = v.stillObtainable;
    j["ownership"] = v.ownership;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionChroma_t& v) {
    v.lastSelected = j.at("lastSelected").get<bool>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.colors = j.at("colors").get<std::vector<std::string>>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionChroma_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
