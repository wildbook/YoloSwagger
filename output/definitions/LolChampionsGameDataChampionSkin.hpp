#ifndef SWAGGER_TYPES_LolChampionsGameDataChampionSkin_HPP
#define SWAGGER_TYPES_LolChampionsGameDataChampionSkin_HPP
#include <json.hpp>
#include "LolChampionsGameDataChampionChroma.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace leagueapi {
  // 
  struct LolChampionsGameDataChampionSkin {
    // 
    std::string cardPath;
    // 
    std::string chromaPath;
    // 
    std::vector<LolChampionsGameDataChampionChroma> chromas;
    // 
    std::vector<LolChampionsCollectionsChampionSkinEmblem> emblems;
    // 
    std::string featuresText;
    // 
    int32_t id;
    // 
    std::string name;
    // 
    std::string rarityGemPath;
    // 
    std::string skinType;
    // 
    std::string splashPath;
    // 
    std::string splashVideoPath;
    // 
    std::string tilePath;
    // 
    std::string uncenteredSplashPath;
  };

  void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSkin& v) {
    j["cardPath"] = v.cardPath;
    j["chromaPath"] = v.chromaPath;
    j["chromas"] = v.chromas;
    j["emblems"] = v.emblems;
    j["featuresText"] = v.featuresText;
    j["id"] = v.id;
    j["name"] = v.name;
    j["rarityGemPath"] = v.rarityGemPath;
    j["skinType"] = v.skinType;
    j["splashPath"] = v.splashPath;
    j["splashVideoPath"] = v.splashVideoPath;
    j["tilePath"] = v.tilePath;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
  }

  void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSkin& v) {
    v.cardPath = j.at("cardPath").get<std::string>;
    v.chromaPath = j.at("chromaPath").get<std::string>;
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma>>;
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem>>;
    v.featuresText = j.at("featuresText").get<std::string>;
    v.id = j.at("id").get<int32_t>;
    v.name = j.at("name").get<std::string>;
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>;
    v.skinType = j.at("skinType").get<std::string>;
    v.splashPath = j.at("splashPath").get<std::string>;
    v.splashVideoPath = j.at("splashVideoPath").get<std::string>;
    v.tilePath = j.at("tilePath").get<std::string>;
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsGameDataChampionSkin_HPP
