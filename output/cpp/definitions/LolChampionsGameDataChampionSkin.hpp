#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsGameDataChampionChroma.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampionSkin_t {
    std::string name;
    std::string uncenteredSplashPath;
    std::vector<LolChampionsGameDataChampionChroma_t> chromas;
    std::string splashPath;
    std::optional<std::string> chromaPath;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::optional<std::string> skinType;
    std::optional<std::string> splashVideoPath;
    std::string tilePath;
    std::string cardPath;
    std::optional<std::string> featuresText;
    int32_t id;
    std::string rarityGemPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSkin_t& v) {
    j["name"] = v.name;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["chromas"] = v.chromas;
    j["splashPath"] = v.splashPath;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["emblems"] = v.emblems;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["tilePath"] = v.tilePath;
    j["cardPath"] = v.cardPath;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["id"] = v.id;
    j["rarityGemPath"] = v.rarityGemPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSkin_t& v) {
    v.name = j.at("name").get<std::string>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma_t>>();
    v.splashPath = j.at("splashPath").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.cardPath = j.at("cardPath").get<std::string>();
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
  }
  inline std::string to_string(const LolChampionsGameDataChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
