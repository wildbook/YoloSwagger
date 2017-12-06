#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTSurvey_t {
    std::string caption;
    std::map<std::string, nlohmann::json> data;
    std::string display;
    uint64_t id;
    std::string title;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurvey_t& v) {
    j["caption"] = v.caption;
    j["data"] = v.data;
    j["display"] = v.display;
    j["id"] = v.id;
    j["title"] = v.title;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurvey_t& v) {
    v.caption = j.at("caption").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, nlohmann::json>>();
    v.display = j.at("display").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.title = j.at("title").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
}
