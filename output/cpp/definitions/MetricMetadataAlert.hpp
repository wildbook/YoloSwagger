#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataNotify.hpp"
namespace leagueapi {
  struct MetricMetadataAlert_t {
    MetricMetadataNotify_t notify;
    std::string description;
    double min;
    std::string level;
    double max;
    std::string pretty_name;
    std::string info;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataAlert_t& v) {
    j["notify"] = v.notify;
    j["description"] = v.description;
    j["min"] = v.min;
    j["level"] = v.level;
    j["max"] = v.max;
    j["pretty_name"] = v.pretty_name;
    j["info"] = v.info;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataAlert_t& v) {
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.description = j.at("description").get<std::string>();
    v.min = j.at("min").get<double>();
    v.level = j.at("level").get<std::string>();
    v.max = j.at("max").get<double>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.info = j.at("info").get<std::string>();
  }
  inline std::string to_string(const MetricMetadataAlert_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
