#ifndef SWAGGER_TYPES_LolChampionsCollectionsChampionMinimal_HPP
#define SWAGGER_TYPES_LolChampionsCollectionsChampionMinimal_HPP
#include <json.hpp>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  // 
  struct LolChampionsCollectionsChampionMinimal {
    // 
    bool rankedPlayEnabled;
    // 
    std::string stingerSfxPath;
    // 
    std::string name;
    // 
    uint64_t purchased;
    // 
    bool botEnabled;
    // 
    std::vector<std::string> disabledQueues;
    // 
    std::string banVoPath;
    // 
    std::string alias;
    // 
    std::string chooseVoPath;
    // 
    std::vector<std::string> roles;
    // 
    LolChampionsCollectionsOwnership ownership;
    // 
    std::string squarePortraitPath;
    // 
    bool active;
    // 
    bool freeToPlay;
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionMinimal& v) {
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["name"] = v.name;
    j["purchased"] = v.purchased;
    j["botEnabled"] = v.botEnabled;
    j["disabledQueues"] = v.disabledQueues;
    j["banVoPath"] = v.banVoPath;
    j["alias"] = v.alias;
    j["chooseVoPath"] = v.chooseVoPath;
    j["roles"] = v.roles;
    j["ownership"] = v.ownership;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["active"] = v.active;
    j["freeToPlay"] = v.freeToPlay;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionMinimal& v) {
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>;
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.purchased = j.at("purchased").get<uint64_t>;
    v.botEnabled = j.at("botEnabled").get<bool>;
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>;
    v.banVoPath = j.at("banVoPath").get<std::string>;
    v.alias = j.at("alias").get<std::string>;
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>;
    v.roles = j.at("roles").get<std::vector<std::string>>;
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership>;
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>;
    v.active = j.at("active").get<bool>;
    v.freeToPlay = j.at("freeToPlay").get<bool>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChampionsCollectionsChampionMinimal_HPP
