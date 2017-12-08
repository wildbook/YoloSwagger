#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsGameDataChampionChroma.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampionSkin_t {
    std::optional<std::string> featuresText;
    std::vector<LolChampionsGameDataChampionChroma_t> chromas;
    std::string name;
    std::string tilePath;
    std::string rarityGemPath;
    std::optional<std::string> splashVideoPath;
    std::string splashPath;
    std::optional<std::string> chromaPath;
    int32_t id;
    std::optional<std::string> skinType;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::string uncenteredSplashPath;
    std::string cardPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSkin_t& v) {
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["chromas"] = v.chromas;
    j["name"] = v.name;
    j["tilePath"] = v.tilePath;
    j["rarityGemPath"] = v.rarityGemPath;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["splashPath"] = v.splashPath;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["id"] = v.id;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["emblems"] = v.emblems;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["cardPath"] = v.cardPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSkin_t& v) {
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma_t>>();
    v.name = j.at("name").get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.id = j.at("id").get<int32_t>();
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::string>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.cardPath = j.at("cardPath").get<std::string>();
  }
  inline std::string to_string(const LolChampionsGameDataChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
