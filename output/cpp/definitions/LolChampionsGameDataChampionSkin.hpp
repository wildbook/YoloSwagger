#ifndef SWAGGER_TYPES_LolChampionsGameDataChampionSkin_HPP
#define SWAGGER_TYPES_LolChampionsGameDataChampionSkin_HPP
#include <json.hpp>
#include "LolChampionsGameDataChampionChroma.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace leagueapi {
  // 
  struct LolChampionsGameDataChampionSkin {
    // 
    std::string name;
    // 
    std::string uncenteredSplashPath;
    // 
    std::vector<LolChampionsGameDataChampionChroma> chromas;
    // 
    std::string splashPath;
    // 
    std::string chromaPath;
    // 
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    // 
    std::string skinType;
    // 
    std::string splashVideoPath;
    // 
    std::string tilePath;
    // 
    std::string cardPath;
    // 
    std::string featuresText;
    // 
    int32_t id;
    // 
    std::string rarityGemPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSkin& v) {
    j["name"] = v.name;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["chromas"] = v.chromas;
    j["splashPath"] = v.splashPath;
    j["chromaPath"] = v.chromaPath;
    j["emblems"] = v.emblems;
    j["skinType"] = v.skinType;
    j["splashVideoPath"] = v.splashVideoPath;
    j["tilePath"] = v.tilePath;
    j["cardPath"] = v.cardPath;
    j["featuresText"] = v.featuresText;
    j["id"] = v.id;
    j["rarityGemPath"] = v.rarityGemPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSkin& v) {
    v.name = j.at("name").get<std::string>;
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>;
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma>>;
    v.splashPath = j.at("splashPath").get<std::string>;
    v.chromaPath = j.at("chromaPath").get<std::string>;
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>;
    v.skinType = j.at("skinType").get<std::string>;
    v.splashVideoPath = j.at("splashVideoPath").get<std::string>;
    v.tilePath = j.at("tilePath").get<std::string>;
    v.cardPath = j.at("cardPath").get<std::string>;
    v.featuresText = j.at("featuresText").get<std::string>;
    v.id = j.at("id").get<int32_t>;
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsGameDataChampionSkin_HPP
