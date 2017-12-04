#ifndef SWAGGER_TYPES_LolChampionsCollectionsChampionSkin_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsChampionSkin_HPP
#include <json.hpp>
#include "LolChampionsCollectionsOwnership.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsCollectionsChampionChroma.hpp"
namespace leagueapi {
  // 
  struct LolChampionsCollectionsChampionSkin {
    // 
    std::string cardPath;
    // 
    int32_t championId;
    // 
    std::string chromaPath;
    // 
    std::vector<LolChampionsCollectionsChampionChroma> chromas;
    // 
    bool disabled;
    // 
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    // 
    std::string featuresText;
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
    std::string rarityGemPath;
    // 
    std::string skinType;
    // 
    std::string splashPath;
    // 
    std::string splashVideoPath;
    // 
    bool stillObtainable;
    // 
    std::string tilePath;
    // 
    std::string uncenteredSplashPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkin& v) {
    j["cardPath"] = v.cardPath;
    j["championId"] = v.championId;
    j["chromaPath"] = v.chromaPath;
    j["chromas"] = v.chromas;
    j["disabled"] = v.disabled;
    j["emblems"] = v.emblems;
    j["featuresText"] = v.featuresText;
    j["id"] = v.id;
    j["isBase"] = v.isBase;
    j["lastSelected"] = v.lastSelected;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["rarityGemPath"] = v.rarityGemPath;
    j["skinType"] = v.skinType;
    j["splashPath"] = v.splashPath;
    j["splashVideoPath"] = v.splashVideoPath;
    j["stillObtainable"] = v.stillObtainable;
    j["tilePath"] = v.tilePath;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkin& v) {
    v.cardPath = j.at("cardPath").get<std::string>;
    v.championId = j.at("championId").get<int32_t>;
    v.chromaPath = j.at("chromaPath").get<std::string>;
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma>>;
    v.disabled = j.at("disabled").get<bool>;
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>;
    v.featuresText = j.at("featuresText").get<std::string>;
    v.id = j.at("id").get<int32_t>;
    v.isBase = j.at("isBase").get<bool>;
    v.lastSelected = j.at("lastSelected").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>;
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>;
    v.skinType = j.at("skinType").get<std::string>;
    v.splashPath = j.at("splashPath").get<std::string>;
    v.splashVideoPath = j.at("splashVideoPath").get<std::string>;
    v.stillObtainable = j.at("stillObtainable").get<bool>;
    v.tilePath = j.at("tilePath").get<std::string>;
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionSkin_HPP
