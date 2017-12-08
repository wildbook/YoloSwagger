#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsRune.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsRunePage_t {
    bool_t current;
    uint32_t_t id;
    std::vector<LolCollectionsCollectionsRune_t> runes;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRunePage_t& v) {
    j["current"] = v.current;
    j["id"] = v.id;
    j["runes"] = v.runes;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRunePage_t& v) {
    v.current = j.at("current").get<bool_t>();
    v.id = j.at("id").get<uint32_t_t>();
    v.runes = j.at("runes").get<std::vector<LolCollectionsCollectionsRune_t>>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRunePage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
