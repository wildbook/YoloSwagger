#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataNotify.hpp"
namespace leagueapi {
  struct MetricMetadataAlert_t {
    std::string_t info;
    std::string_t description;
    double_t min;
    double_t max;
    std::string_t level;
    std::string_t pretty_name;
    MetricMetadataNotify_t notify;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataAlert_t& v) {
    j["info"] = v.info;
    j["description"] = v.description;
    j["min"] = v.min;
    j["max"] = v.max;
    j["level"] = v.level;
    j["pretty_name"] = v.pretty_name;
    j["notify"] = v.notify;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataAlert_t& v) {
    v.info = j.at("info").get<std::string_t>();
    v.description = j.at("description").get<std::string_t>();
    v.min = j.at("min").get<double_t>();
    v.max = j.at("max").get<double_t>();
    v.level = j.at("level").get<std::string_t>();
    v.pretty_name = j.at("pretty_name").get<std::string_t>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
  }
  inline std::string to_string(const MetricMetadataAlert_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
