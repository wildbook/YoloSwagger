#ifndef SWAGGER_TYPES_LolChampionsCollectionsChampionSkinMinimal_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsChampionSkinMinimal_HPP
#include <json.hpp>
#include "LolChampionsCollectionsOwnership.hpp"
namespace test {
  // 
  struct LolChampionsCollectionsChampionSkinMinimal {
'    // 
    int32_t championId;
    // 
    std::string chromaPath;
    // 
    bool disabled;
    // 
    int32_t id;
    // 
    bool isBase;
    // 
    bool lastSelected;
    // 
    std::string name;
    // 
    LolChampionsCollectionsOwnership ownership;
    // 
    std::string splashPath;
    // 
    bool stillObtainable;
    // 
    std::string tilePath;
  };

  void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinMinimal& v) {
    j["championId"] = v.championId;
    j["chromaPath"] = v.chromaPath;
    j["disabled"] = v.disabled;
    j["id"] = v.id;
    j["isBase"] = v.isBase;
    j["lastSelected"] = v.lastSelected;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["splashPath"] = v.splashPath;
    j["stillObtainable"] = v.stillObtainable;
    j["tilePath"] = v.tilePath;
  }

  void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinMinimal& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.chromaPath = j.at("chromaPath").get<std::string>;
    v.disabled = j.at("disabled").get<bool>;
    v.id = j.at("id").get<int32_t>;
    v.isBase = j.at("isBase").get<bool>;
    v.lastSelected = j.at("lastSelected").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>;
    v.splashPath = j.at("splashPath").get<std::string>;
    v.stillObtainable = j.at("stillObtainable").get<bool>;
    v.tilePath = j.at("tilePath").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionSkinMinimal_HPP
