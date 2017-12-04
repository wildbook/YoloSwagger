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
    std::string chromaPath;
    // 
    std::vector<std::string> colors;
    // 
    bool disabled;
    // 
    int32_t id;
    // 
    bool lastSelected;
    // 
    std::string name;
    // 
    LolChampionsCollectionsOwnership ownership;
    // 
    bool stillObtainable;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionChroma& v) {
    j["championId"] = v.championId;
    j["chromaPath"] = v.chromaPath;
    j["colors"] = v.colors;
    j["disabled"] = v.disabled;
    j["id"] = v.id;
    j["lastSelected"] = v.lastSelected;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["stillObtainable"] = v.stillObtainable;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionChroma& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.chromaPath = j.at("chromaPath").get<std::string>;
    v.colors = j.at("colors").get<std::vector<std::string>>;
    v.disabled = j.at("disabled").get<bool>;
    v.id = j.at("id").get<int32_t>;
    v.lastSelected = j.at("lastSelected").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>;
    v.stillObtainable = j.at("stillObtainable").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionChroma_HPP
