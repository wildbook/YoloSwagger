#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTSurvey_t {
    uint64_t id;
    std::string type;
    std::map<std::string, nlohmann::json> data;
    std::string display;
    std::string caption;
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurvey_t& v) {
    j["id"] = v.id;
    j["type"] = v.type;
    j["data"] = v.data;
    j["display"] = v.display;
    j["caption"] = v.caption;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurvey_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
    v.data = j.at("data").get<std::map<std::string, nlohmann::json>>();
    v.display = j.at("display").get<std::string>();
    v.caption = j.at("caption").get<std::string>();
    v.title = j.at("title").get<std::string>();
  }
  inline std::string to_string(const LolPftPFTSurvey_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
