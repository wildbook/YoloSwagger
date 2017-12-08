#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionMinimal_t {
    bool_t rankedPlayEnabled;
    std::string_t stingerSfxPath;
    std::string_t name;
    uint64_t_t purchased;
    bool_t botEnabled;
    std::vector<std::string> disabledQueues;
    std::string_t banVoPath;
    std::string_t alias;
    std::string_t chooseVoPath;
    std::vector<std::string> roles;
    LolChampionsCollectionsOwnership_t ownership;
    std::string_t squarePortraitPath;
    bool_t active;
    bool_t freeToPlay;
    int32_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionMinimal_t& v) {
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

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionMinimal_t& v) {
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool_t>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.purchased = j.at("purchased").get<uint64_t_t>();
    v.botEnabled = j.at("botEnabled").get<bool_t>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.banVoPath = j.at("banVoPath").get<std::string_t>();
    v.alias = j.at("alias").get<std::string_t>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string_t>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string_t>();
    v.active = j.at("active").get<bool_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool_t>();
    v.id = j.at("id").get<int32_t_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
