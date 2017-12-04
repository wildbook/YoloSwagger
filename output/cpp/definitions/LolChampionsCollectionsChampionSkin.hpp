#ifndef SWAGGER_TYPES_LolChampionsCollectionsChampionSkin_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsChampionSkin_HPP
#include <json.hpp>
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace leagueapi {
  // 
  struct LolChampionsCollectionsChampionSkin {
    // 
    int32_t championId;
    // 
    std::string name;
    // 
    std::string uncenteredSplashPath;
    // 
    std::vector<LolChampionsCollectionsChampionChroma> chromas;
    // 
    std::string splashPath;
    // 
    bool stillObtainable;
    // 
    std::string cardPath;
    // 
    bool disabled;
    // 
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    // 
    std::string skinType;
    // 
    std::string splashVideoPath;
    // 
    LolChampionsCollectionsOwnership ownership;
    // 
    std::string tilePath;
    // 
    int32_t id;
    // 
    bool isBase;
    // 
    bool lastSelected;
    // 
    std::string featuresText;
    // 
    std::string chromaPath;
    // 
    std::string rarityGemPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkin& v) {
    j["championId"] = v.championId;
    j["name"] = v.name;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["chromas"] = v.chromas;
    j["splashPath"] = v.splashPath;
    j["stillObtainable"] = v.stillObtainable;
    j["cardPath"] = v.cardPath;
    j["disabled"] = v.disabled;
    j["emblems"] = v.emblems;
    j["skinType"] = v.skinType;
    j["splashVideoPath"] = v.splashVideoPath;
    j["ownership"] = v.ownership;
    j["tilePath"] = v.tilePath;
    j["id"] = v.id;
    j["isBase"] = v.isBase;
    j["lastSelected"] = v.lastSelected;
    j["featuresText"] = v.featuresText;
    j["chromaPath"] = v.chromaPath;
    j["rarityGemPath"] = v.rarityGemPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkin& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>;
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma>>;
    v.splashPath = j.at("splashPath").get<std::string>;
    v.stillObtainable = j.at("stillObtainable").get<bool>;
    v.cardPath = j.at("cardPath").get<std::string>;
    v.disabled = j.at("disabled").get<bool>;
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>;
    v.skinType = j.at("skinType").get<std::string>;
    v.splashVideoPath = j.at("splashVideoPath").get<std::string>;
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>;
    v.tilePath = j.at("tilePath").get<std::string>;
    v.id = j.at("id").get<int32_t>;
    v.isBase = j.at("isBase").get<bool>;
    v.lastSelected = j.at("lastSelected").get<bool>;
    v.featuresText = j.at("featuresText").get<std::string>;
    v.chromaPath = j.at("chromaPath").get<std::string>;
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionSkin_HPP
