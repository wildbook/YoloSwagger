#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsGameDataChampionChroma.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampionSkin_t {
    std::optional<std::string> skinType;
    std::optional<std::string> splashVideoPath;
    std::vector<LolChampionsGameDataChampionChroma_t> chromas;
    std::string splashPath;
    std::string uncenteredSplashPath;
    std::string rarityGemPath;
    std::optional<std::string> chromaPath;
    std::string tilePath;
    std::optional<std::string> featuresText;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    int32_t id;
    std::string name;
    std::string cardPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSkin_t& v) {
    if(v.skinType)
      j["skinType"] = *v.skinType;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["chromas"] = v.chromas;
    j["splashPath"] = v.splashPath;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["rarityGemPath"] = v.rarityGemPath;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["tilePath"] = v.tilePath;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["emblems"] = v.emblems;
    j["id"] = v.id;
    j["name"] = v.name;
    j["cardPath"] = v.cardPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSkin_t& v) {
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma_t>>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::string>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.cardPath = j.at("cardPath").get<std::string>();
  }
  inline std::string to_string(const LolChampionsGameDataChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
