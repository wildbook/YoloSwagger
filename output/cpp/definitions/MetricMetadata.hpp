#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataAlert.hpp"
#include "MetricPriority.hpp"
#include "AggregationType.hpp"
#include "MetricDataType.hpp"
#include "MetricType.hpp"
#include "MetricMetadataNotify.hpp"
namespace leagueapi {
  struct MetricMetadata_t {
    std::string description;
    MetricDataType_t data_type;
    std::string category;
    MetricMetadataNotify_t notify;
    std::string pretty_name;
    uint32_t sample_window_ms;
    AggregationType_t transientAggregation;
    std::string units;
    MetricType_t type;
    std::vector<MetricMetadataAlert_t> alerts;
    MetricPriority_t priority;
    std::string destination;
    uint32_t period;
    std::string info;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadata_t& v) {
    j["description"] = v.description;
    j["data_type"] = v.data_type;
    j["category"] = v.category;
    j["notify"] = v.notify;
    j["pretty_name"] = v.pretty_name;
    j["sample_window_ms"] = v.sample_window_ms;
    j["transientAggregation"] = v.transientAggregation;
    j["units"] = v.units;
    j["type"] = v.type;
    j["alerts"] = v.alerts;
    j["priority"] = v.priority;
    j["destination"] = v.destination;
    j["period"] = v.period;
    j["info"] = v.info;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadata_t& v) {
    v.description = j.at("description").get<std::string>();
    v.data_type = j.at("data_type").get<MetricDataType_t>();
    v.category = j.at("category").get<std::string>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>();
    v.transientAggregation = j.at("transientAggregation").get<AggregationType_t>();
    v.units = j.at("units").get<std::string>();
    v.type = j.at("type").get<MetricType_t>();
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert_t>>();
    v.priority = j.at("priority").get<MetricPriority_t>();
    v.destination = j.at("destination").get<std::string>();
    v.period = j.at("period").get<uint32_t>();
    v.info = j.at("info").get<std::string>();
  }
  inline std::string to_string(const MetricMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
