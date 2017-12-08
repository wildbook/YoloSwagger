#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsMastery.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsMasteryPage_t {
    bool_t current;
    std::vector<LolCollectionsCollectionsMastery_t> masteries;
    std::map<std::string, uint32_t> summary;
    uint32_t_t id;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryPage_t& v) {
    j["current"] = v.current;
    j["masteries"] = v.masteries;
    j["summary"] = v.summary;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryPage_t& v) {
    v.current = j.at("current").get<bool_t>();
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery_t>>();
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>();
    v.id = j.at("id").get<uint32_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsMasteryPage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
