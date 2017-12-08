#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataNotify.hpp"
namespace leagueapi {
  struct MetricMetadataAlert_t {
    std::string info;
    double max;
    double min;
    std::string pretty_name;
    std::string description;
    std::string level;
    MetricMetadataNotify_t notify;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataAlert_t& v) {
    j["info"] = v.info;
    j["max"] = v.max;
    j["min"] = v.min;
    j["pretty_name"] = v.pretty_name;
    j["description"] = v.description;
    j["level"] = v.level;
    j["notify"] = v.notify;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataAlert_t& v) {
    v.info = j.at("info").get<std::string>();
    v.max = j.at("max").get<double>();
    v.min = j.at("min").get<double>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.level = j.at("level").get<std::string>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
  }
  inline std::string to_string(const MetricMetadataAlert_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
