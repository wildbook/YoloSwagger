#ifndef SWAGGER_TYPES_LolChampionsCollectionsChampionChroma_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsChampionChroma_HPP
#include <json.hpp>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolChampionsCollectionsChampionChroma {
    // 
    int32_t championId;
    // 
    std::string name;
    // 
    bool stillObtainable;
    // 
    bool lastSelected;
    // 
    bool disabled;
    // 
    std::vector<std::string> colors;
    // 
    LolChampionsCollectionsOwnership ownership;
    // 
    int32_t id;
    // 
    std::string chromaPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionChroma& v) {
    j["championId"] = v.championId;
    j["name"] = v.name;
    j["stillObtainable"] = v.stillObtainable;
    j["lastSelected"] = v.lastSelected;
    j["disabled"] = v.disabled;
    j["colors"] = v.colors;
    j["ownership"] = v.ownership;
    j["id"] = v.id;
    j["chromaPath"] = v.chromaPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionChroma& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.stillObtainable = j.at("stillObtainable").get<bool>;
    v.lastSelected = j.at("lastSelected").get<bool>;
    v.disabled = j.at("disabled").get<bool>;
    v.colors = j.at("colors").get<std::vector<std::string>>;
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>;
    v.id = j.at("id").get<int32_t>;
    v.chromaPath = j.at("chromaPath").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionChroma_HPP
